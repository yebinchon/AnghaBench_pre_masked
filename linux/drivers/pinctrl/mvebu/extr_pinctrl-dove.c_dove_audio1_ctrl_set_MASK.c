
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvebu_mpp_ctrl_data {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_4(struct mvebu_mpp_ctrl_data *VAR_9, unsigned VAR_10,
    unsigned long VAR_11)
{
 unsigned int VAR_12 = FUNC_1(VAR_8);

 VAR_12 &= ~VAR_0;
 if (VAR_11 & FUNC_0(3))
  VAR_12 |= VAR_0;
 FUNC_3(VAR_12, VAR_8);

 FUNC_2(VAR_7, VAR_4,
      VAR_5,
      (VAR_11 & FUNC_0(2)) ? VAR_5 : 0);
 FUNC_2(VAR_7, VAR_3,
      VAR_1,
      (VAR_11 & FUNC_0(1)) ? VAR_1 : 0);
 FUNC_2(VAR_7, VAR_2,
      VAR_6,
      (VAR_11 & FUNC_0(0)) ? VAR_6 : 0);

 return 0;
}
