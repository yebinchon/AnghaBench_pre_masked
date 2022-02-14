
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct cxgbit_device {int dummy; } ;
struct cpl_tid_release {int dummy; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_2 (struct cxgbit_device*,struct sk_buff*) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(struct cxgbit_device *VAR_1, u32 VAR_2)
{
 u32 VAR_3 = FUNC_3(sizeof(struct cpl_tid_release), 16);
 struct sk_buff *VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_0);
 if (!VAR_4)
  return;

 FUNC_1(VAR_4, VAR_3, VAR_2, 0);
 FUNC_2(VAR_1, VAR_4);
}
