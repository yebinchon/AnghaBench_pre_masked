
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {scalar_t__ rgout0_usage; int routing_tables; } ;
struct comedi_device {struct ni_private* private; } ;
typedef scalar_t__ s8 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct comedi_device*) ;
 scalar_t__ FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ,struct comedi_device*) ;

__attribute__((used)) static int FUNC_4(int VAR_2, struct comedi_device *VAR_3)
{
 struct ni_private *VAR_4 = VAR_3->private;
 s8 VAR_5 = FUNC_2(FUNC_0(VAR_2), VAR_1,
       &VAR_4->routing_tables);

 if (VAR_4->rgout0_usage > 0 && FUNC_1(VAR_3) == VAR_5) {
  --VAR_4->rgout0_usage;
  if (!VAR_4->rgout0_usage)
   FUNC_3(0, VAR_3);
  return 0;
 }
 return -VAR_0;
}
