
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptp_pin_desc {int func; unsigned int chan; } ;
struct ptp_clock_info {unsigned int n_pins; unsigned int n_ext_ts; unsigned int n_per_out; scalar_t__ (* verify ) (struct ptp_clock_info*,unsigned int,int,unsigned int) ;struct ptp_pin_desc* pin_config; } ;
struct ptp_clock {struct ptp_clock_info* info; } ;
typedef enum ptp_pin_function { ____Placeholder_ptp_pin_function } ptp_pin_function ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (char*,int,unsigned int) ;
 int FUNC_1 (struct ptp_clock_info*,int,unsigned int) ;
 scalar_t__ FUNC_2 (struct ptp_clock_info*,unsigned int,int,unsigned int) ;

int FUNC_3(struct ptp_clock *VAR_2, unsigned int VAR_3,
      enum ptp_pin_function VAR_4, unsigned int VAR_5)
{
 struct ptp_clock_info *VAR_6 = VAR_2->info;
 struct ptp_pin_desc *VAR_7 = ((void*)0), *VAR_8 = &VAR_6->pin_config[VAR_3];
 unsigned int VAR_9;


 for (VAR_9 = 0; VAR_9 < VAR_6->n_pins; VAR_9++) {
  if (VAR_6->pin_config[VAR_9].func == VAR_4 &&
      VAR_6->pin_config[VAR_9].chan == VAR_5) {
   VAR_7 = &VAR_6->pin_config[VAR_9];
   break;
  }
 }
 if (VAR_7 && VAR_9 == VAR_3)
  return 0;


 switch (VAR_4) {
 case 130:
  break;
 case 131:
  if (VAR_5 >= VAR_6->n_ext_ts)
   return -VAR_0;
  break;
 case 129:
  if (VAR_5 >= VAR_6->n_per_out)
   return -VAR_0;
  break;
 case 128:
  if (VAR_5 != 0)
   return -VAR_0;
  break;
 default:
  return -VAR_0;
 }

 if (VAR_6->verify(VAR_6, VAR_3, VAR_4, VAR_5)) {
  FUNC_0("driver cannot use function %u on pin %u\n", VAR_4, VAR_5);
  return -VAR_1;
 }


 if (VAR_7) {
  FUNC_1(VAR_6, VAR_4, VAR_5);
  VAR_7->func = 130;
  VAR_7->chan = 0;
 }
 FUNC_1(VAR_6, VAR_8->func, VAR_8->chan);
 VAR_8->func = VAR_4;
 VAR_8->chan = VAR_5;

 return 0;
}
