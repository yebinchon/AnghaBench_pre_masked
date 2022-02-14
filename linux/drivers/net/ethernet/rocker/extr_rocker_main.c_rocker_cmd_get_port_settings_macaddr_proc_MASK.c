
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rocker_tlv {int dummy; } ;
struct rocker_port {int dummy; } ;
struct rocker_desc_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (unsigned char*,int ) ;
 int FUNC_1 (struct rocker_tlv const*) ;
 scalar_t__ FUNC_2 (struct rocker_tlv const*) ;
 int FUNC_3 (struct rocker_tlv const**,int ,struct rocker_desc_info const*) ;
 int FUNC_4 (struct rocker_tlv const**,int ,struct rocker_tlv const*) ;

__attribute__((used)) static int
FUNC_5(const struct rocker_port *VAR_7,
       const struct rocker_desc_info *VAR_8,
       void *VAR_9)
{
 unsigned char *VAR_10 = VAR_9;
 const struct rocker_tlv *VAR_11[VAR_4 + 1];
 const struct rocker_tlv *VAR_12[VAR_6 + 1];
 const struct rocker_tlv *VAR_13;

 FUNC_3(VAR_11, VAR_4, VAR_8);
 if (!VAR_11[VAR_3])
  return -VAR_1;

 FUNC_4(VAR_12, VAR_6,
    VAR_11[VAR_3]);
 VAR_13 = VAR_12[VAR_5];
 if (!VAR_13)
  return -VAR_1;

 if (FUNC_2(VAR_13) != VAR_2)
  return -VAR_0;

 FUNC_0(VAR_10, FUNC_1(VAR_13));
 return 0;
}
