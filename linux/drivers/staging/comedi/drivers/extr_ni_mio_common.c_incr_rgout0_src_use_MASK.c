
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
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct comedi_device*) ;
 scalar_t__ FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (scalar_t__,struct comedi_device*) ;

__attribute__((used)) static int FUNC_4(int VAR_3, struct comedi_device *VAR_4)
{
 struct ni_private *VAR_5 = VAR_4->private;
 s8 VAR_6 = FUNC_2(FUNC_0(VAR_3), VAR_2,
       &VAR_5->routing_tables);

 if (VAR_6 < 0)
  return -VAR_1;

 if (VAR_5->rgout0_usage > 0 && FUNC_1(VAR_4) != VAR_6)
  return -VAR_0;

 ++VAR_5->rgout0_usage;
 FUNC_3(VAR_6, VAR_4);
 return 0;
}
