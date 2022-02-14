
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rocker_tlv {int dummy; } ;
struct rocker_port {int dummy; } ;
struct rocker_desc_info {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct rocker_tlv const*) ;
 int FUNC_1 (struct rocker_tlv const**,int ,struct rocker_desc_info const*) ;
 int FUNC_2 (struct rocker_tlv const**,int ,struct rocker_tlv const*) ;

__attribute__((used)) static int
FUNC_3(const struct rocker_port *VAR_5,
           const struct rocker_desc_info *VAR_6,
           void *VAR_7)
{
 u8 *VAR_8 = VAR_7;
 const struct rocker_tlv *VAR_9[VAR_2 + 1];
 const struct rocker_tlv *VAR_10[VAR_3 + 1];
 const struct rocker_tlv *VAR_11;

 FUNC_1(VAR_9, VAR_2, VAR_6);
 if (!VAR_9[VAR_1])
  return -VAR_0;

 FUNC_2(VAR_10, VAR_3,
    VAR_9[VAR_1]);
 VAR_11 = VAR_10[VAR_4];
 if (!VAR_11)
  return -VAR_0;

 *VAR_8 = FUNC_0(VAR_10[VAR_4]);
 return 0;
}
