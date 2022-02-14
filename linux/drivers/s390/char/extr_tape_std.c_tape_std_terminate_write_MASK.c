
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tape_device {scalar_t__ required_tapemarks; int first_minor; } ;


 int FUNC_0 (int,char*,int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct tape_device*,int ,int) ;

int
FUNC_2(struct tape_device *VAR_2)
{
 int VAR_3;

 if(VAR_2->required_tapemarks == 0)
  return 0;

 FUNC_0(5, "tape%d: terminate write %dxEOF\n", VAR_2->first_minor,
  VAR_2->required_tapemarks);

 VAR_3 = FUNC_1(VAR_2, VAR_1, VAR_2->required_tapemarks);
 if (VAR_3)
  return VAR_3;

 VAR_2->required_tapemarks = 0;
 return FUNC_1(VAR_2, VAR_0, 1);
}
