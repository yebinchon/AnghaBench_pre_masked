
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnp_dev {int num_dependent_sets; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*,int,int) ;

__attribute__((used)) static inline unsigned int FUNC_1(struct pnp_dev *VAR_7,
       int VAR_8)
{
 unsigned int VAR_9;

 if (VAR_8 > VAR_5) {
  FUNC_0(&VAR_7->dev, "invalid dependent option priority %d "
    "clipped to %d", VAR_8,
    VAR_6);
  VAR_8 = VAR_6;
 }

 VAR_9 = VAR_0 |
     ((VAR_7->num_dependent_sets & VAR_3) <<
  VAR_4) |
     ((VAR_8 & VAR_1) <<
  VAR_2);

 VAR_7->num_dependent_sets++;

 return VAR_9;
}
