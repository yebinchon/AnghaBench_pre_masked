
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rocker_tlv {int dummy; } ;
struct rocker_port {int pport; } ;
struct rocker_desc_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct rocker_desc_info*,struct rocker_tlv*) ;
 struct rocker_tlv* FUNC_1 (struct rocker_desc_info*,int ) ;
 scalar_t__ FUNC_2 (struct rocker_desc_info*,int ,int) ;
 scalar_t__ FUNC_3 (struct rocker_desc_info*,int ,int ) ;

__attribute__((used)) static int
FUNC_4(const struct rocker_port *VAR_6,
          struct rocker_desc_info *VAR_7,
          void *VAR_8)
{
 int VAR_9 = *(int *)VAR_8;
 struct rocker_tlv *VAR_10;

 if (FUNC_2(VAR_7, VAR_4,
          VAR_5))
  return -VAR_0;
 VAR_10 = FUNC_1(VAR_7, VAR_1);
 if (!VAR_10)
  return -VAR_0;
 if (FUNC_3(VAR_7, VAR_3,
          VAR_6->pport))
  return -VAR_0;
 if (FUNC_2(VAR_7, VAR_2,
          VAR_9))
  return -VAR_0;
 FUNC_0(VAR_7, VAR_10);
 return 0;
}
