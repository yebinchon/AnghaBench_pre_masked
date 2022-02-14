
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {scalar_t__* rtsi_shared_mux_usage; int routing_tables; } ;
struct comedi_device {struct ni_private* private; } ;
typedef scalar_t__ s8 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int const,struct comedi_device*) ;
 scalar_t__ FUNC_3 (int ,int,int *) ;
 int FUNC_4 (int const,int ,struct comedi_device*) ;

__attribute__((used)) static int FUNC_5(int VAR_1, int VAR_2,
     struct comedi_device *VAR_3)
{
 struct ni_private *VAR_4 = VAR_3->private;
 s8 VAR_5 = FUNC_3(FUNC_0(VAR_1), VAR_2,
       &VAR_4->routing_tables);
 const int VAR_6 = VAR_2 - FUNC_1(0);

 if (VAR_4->rtsi_shared_mux_usage[VAR_6] > 0 &&
     FUNC_2(VAR_6, VAR_3) == VAR_5) {
  --VAR_4->rtsi_shared_mux_usage[VAR_6];
  if (!VAR_4->rtsi_shared_mux_usage[VAR_6])
   FUNC_4(VAR_6, 0, VAR_3);
  return 0;
 }

 return -VAR_0;
}
