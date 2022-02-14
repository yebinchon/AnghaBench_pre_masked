
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iavf_hw {int dummy; } ;
struct iavf_adapter {struct iavf_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct iavf_hw*) ;
 int FUNC_1 (struct iavf_hw*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct iavf_adapter *VAR_5)
{
 struct iavf_hw *VAR_6 = &VAR_5->hw;

 FUNC_1(VAR_6, VAR_0, VAR_1 |
           VAR_2);
 FUNC_1(VAR_6, VAR_3, VAR_4);

 FUNC_0(VAR_6);
}
