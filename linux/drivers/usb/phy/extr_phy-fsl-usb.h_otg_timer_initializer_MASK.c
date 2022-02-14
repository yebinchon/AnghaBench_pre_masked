
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_otg_timer {void (* function ) (unsigned long) ;unsigned long expires; unsigned long data; } ;


 int VAR_0 ;
 struct fsl_otg_timer* FUNC_0 (int,int ) ;

inline struct fsl_otg_timer *FUNC_1
(void (*VAR_1)(unsigned long), unsigned long VAR_2, unsigned long VAR_3)
{
 struct fsl_otg_timer *VAR_4;

 VAR_4 = FUNC_0(sizeof(struct fsl_otg_timer), VAR_0);
 if (!VAR_4)
  return ((void*)0);
 VAR_4->function = VAR_1;
 VAR_4->expires = VAR_2;
 VAR_4->data = VAR_3;
 return VAR_4;
}
