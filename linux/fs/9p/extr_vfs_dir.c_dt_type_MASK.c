
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p9_wstat {unsigned long mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;

__attribute__((used)) static inline int FUNC_0(struct p9_wstat *VAR_5)
{
 unsigned long VAR_6 = VAR_5->mode;
 int VAR_7 = VAR_2;

 if (VAR_6 & VAR_3)
  VAR_7 = VAR_0;
 if (VAR_6 & VAR_4)
  VAR_7 = VAR_1;

 return VAR_7;
}
