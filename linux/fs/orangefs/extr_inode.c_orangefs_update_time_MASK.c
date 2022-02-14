
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec64 {int dummy; } ;
struct inode {int dummy; } ;
struct iattr {int ia_valid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct inode*,struct iattr*) ;
 int FUNC_1 (struct inode*,struct timespec64*,int) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (struct iattr*,int ,int) ;

int FUNC_5(struct inode *VAR_7, struct timespec64 *VAR_8, int VAR_9)
{
 struct iattr VAR_10;
 FUNC_3(VAR_3, "orangefs_update_time: %pU\n",
     FUNC_2(VAR_7));
 FUNC_1(VAR_7, VAR_8, VAR_9);
 FUNC_4(&VAR_10, 0, sizeof VAR_10);
        if (VAR_9 & VAR_4)
  VAR_10.ia_valid |= VAR_0;
 if (VAR_9 & VAR_5)
  VAR_10.ia_valid |= VAR_1;
 if (VAR_9 & VAR_6)
  VAR_10.ia_valid |= VAR_2;
 return FUNC_0(VAR_7, &VAR_10);
}
