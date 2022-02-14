
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fs3270 {int init; } ;


 int VAR_0 ;
 struct fs3270* FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct fs3270*) ;
 struct fs3270* FUNC_3 (int,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static struct fs3270 *
FUNC_5(void)
{
 struct fs3270 *VAR_2;

 VAR_2 = FUNC_3(sizeof(struct fs3270),VAR_1);
 if (!VAR_2)
  return FUNC_0(-VAR_0);
 VAR_2->init = FUNC_4(0);
 if (FUNC_1(VAR_2->init)) {
  FUNC_2(VAR_2);
  return FUNC_0(-VAR_0);
 }
 return VAR_2;
}
