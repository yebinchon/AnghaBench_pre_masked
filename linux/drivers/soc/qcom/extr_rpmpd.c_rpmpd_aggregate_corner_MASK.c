
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpmpd {int corner; scalar_t__ enabled; struct rpmpd* peer; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (struct rpmpd*,int ,unsigned int) ;
 int FUNC_2 (struct rpmpd*,int ,unsigned int*,unsigned int*) ;

__attribute__((used)) static int FUNC_3(struct rpmpd *VAR_2)
{
 int VAR_3;
 struct rpmpd *VAR_4 = VAR_2->peer;
 unsigned int VAR_5, VAR_6;
 unsigned int VAR_7 = 0, VAR_8 = 0;
 unsigned int VAR_9 = 0, VAR_10 = 0;

 FUNC_2(VAR_2, VAR_2->corner, &VAR_7, &VAR_8);

 if (VAR_4 && VAR_4->enabled)
  FUNC_2(VAR_4, VAR_4->corner, &VAR_9,
    &VAR_10);

 VAR_5 = FUNC_0(VAR_7, VAR_9);

 VAR_3 = FUNC_1(VAR_2, VAR_0, VAR_5);
 if (VAR_3)
  return VAR_3;

 VAR_6 = FUNC_0(VAR_8, VAR_10);

 return FUNC_1(VAR_2, VAR_1, VAR_6);
}
