
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {int * rtsi_shared_mux_usage; int routing_tables; } ;
struct comedi_device {struct ni_private* private; } ;
typedef scalar_t__ s8 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int,struct comedi_device*) ;
 scalar_t__ FUNC_3 (int ,int,int *) ;
 int FUNC_4 (int,scalar_t__,struct comedi_device*) ;

__attribute__((used)) static int FUNC_5(int VAR_3, struct comedi_device *VAR_4)
{
 struct ni_private *VAR_5 = VAR_4->private;
 int VAR_6 = -1;
 int VAR_7 = -VAR_1;
 s8 VAR_8;
 int VAR_9;


 for (VAR_9 = 0; VAR_9 < VAR_2; ++VAR_9) {
  VAR_8 = FUNC_3(FUNC_0(VAR_3), FUNC_1(VAR_9),
            &VAR_5->routing_tables);

  if (VAR_8 < 0)
   continue;

  if (!VAR_5->rtsi_shared_mux_usage[VAR_9]) {
   if (VAR_6 < 0)

    VAR_6 = VAR_9;
  } else {





   VAR_7 = -VAR_0;

   if (FUNC_2(VAR_9, VAR_4) == VAR_8) {




    goto success;
   }
  }
 }

 if (VAR_6 < 0)
  return VAR_7;


 VAR_9 = VAR_6;

success:
 ++VAR_5->rtsi_shared_mux_usage[VAR_9];
 FUNC_4(VAR_9, VAR_8, VAR_4);
 return FUNC_1(VAR_9);
}
