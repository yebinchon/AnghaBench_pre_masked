
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hnae3_handle {int dummy; } ;
struct hclge_vport {int dummy; } ;


 struct hclge_vport* FUNC_0 (struct hnae3_handle*) ;
 int FUNC_1 (struct hclge_vport*,unsigned char const*) ;

__attribute__((used)) static int FUNC_2(struct hnae3_handle *VAR_0,
       const unsigned char *VAR_1)
{
 struct hclge_vport *VAR_2 = FUNC_0(VAR_0);

 return FUNC_1(VAR_2, VAR_1);
}
