
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {int dummy; } ;
struct gfs2_sbd {int sd_flags; } ;
struct address_space {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct gfs2_sbd* FUNC_0 (struct address_space*) ;
 int FUNC_1 (struct address_space*,struct writeback_control*,int ) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct address_space *VAR_2,
      struct writeback_control *VAR_3)
{
 struct gfs2_sbd *VAR_4 = FUNC_0(VAR_2);
 int VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_1);







 if (VAR_5 == 0)
  FUNC_2(VAR_0, &VAR_4->sd_flags);

 return VAR_5;
}
