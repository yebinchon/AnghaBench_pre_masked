
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpmhpd {unsigned int corner; unsigned int active_corner; scalar_t__ enabled; struct rpmhpd* peer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (struct rpmhpd*,int ,unsigned int,int) ;
 int FUNC_2 (struct rpmhpd*,unsigned int,unsigned int*,unsigned int*) ;

__attribute__((used)) static int FUNC_3(struct rpmhpd *VAR_3, unsigned int VAR_4)
{
 int VAR_5;
 struct rpmhpd *VAR_6 = VAR_3->peer;
 unsigned int VAR_7, VAR_8;
 unsigned int VAR_9 = 0, VAR_10 = 0;
 unsigned int VAR_11 = 0, VAR_12 = 0;

 FUNC_2(VAR_3, VAR_4, &VAR_9, &VAR_10);

 if (VAR_6 && VAR_6->enabled)
  FUNC_2(VAR_6, VAR_6->corner, &VAR_11,
    &VAR_12);

 VAR_7 = FUNC_0(VAR_9, VAR_11);

 VAR_5 = FUNC_1(VAR_3, VAR_0, VAR_7,
     VAR_7 > VAR_3->active_corner);
 if (VAR_5)
  return VAR_5;

 VAR_3->active_corner = VAR_7;

 if (VAR_6) {
  VAR_6->active_corner = VAR_7;

  VAR_5 = FUNC_1(VAR_3, VAR_2,
      VAR_7, 0);
  if (VAR_5)
   return VAR_5;

  VAR_8 = FUNC_0(VAR_10, VAR_12);

  return FUNC_1(VAR_3, VAR_1, VAR_8,
       0);
 }

 return VAR_5;
}
