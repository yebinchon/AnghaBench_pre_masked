
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct link_vars {int eee_status; } ;
struct link_params {int eee_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct link_params*,struct link_vars*) ;

__attribute__((used)) static int FUNC_1(struct link_params *VAR_5,
         struct link_vars *VAR_6, u8 VAR_7)
{
 VAR_6->eee_status |= ((u32) VAR_7) << VAR_4;


 if (VAR_5->eee_mode & VAR_1)
  VAR_6->eee_status |= VAR_2;
 else
  VAR_6->eee_status &= ~VAR_2;

 if (VAR_5->eee_mode & VAR_0)
  VAR_6->eee_status |= VAR_3;
 else
  VAR_6->eee_status &= ~VAR_3;

 return FUNC_0(VAR_5, VAR_6);
}
