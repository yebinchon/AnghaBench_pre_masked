
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct rocker_tlv {int dummy; } ;
struct rocker_port {scalar_t__ pport; } ;
struct rocker_desc_info {int dummy; } ;
struct TYPE_3__ {size_t type; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 TYPE_1__* VAR_5 ;
 scalar_t__ FUNC_1 (struct rocker_tlv const*) ;
 int FUNC_2 (struct rocker_tlv const*) ;
 int FUNC_3 (struct rocker_tlv const**,int ,struct rocker_desc_info const*) ;
 int FUNC_4 (struct rocker_tlv const**,int ,struct rocker_tlv const*) ;

__attribute__((used)) static int
FUNC_5(const struct rocker_port *VAR_6,
           const struct rocker_desc_info *VAR_7,
           void *VAR_8)
{
 const struct rocker_tlv *VAR_9[VAR_2 + 1];
 const struct rocker_tlv *VAR_10[VAR_3 + 1];
 const struct rocker_tlv *VAR_11;
 u32 VAR_12;
 u64 *VAR_13 = VAR_8;
 int VAR_14;

 FUNC_3(VAR_9, VAR_2, VAR_7);

 if (!VAR_9[VAR_1])
  return -VAR_0;

 FUNC_4(VAR_10, VAR_3,
    VAR_9[VAR_1]);

 if (!VAR_10[VAR_4])
  return -VAR_0;

 VAR_12 = FUNC_1(VAR_10[VAR_4]);
 if (VAR_12 != VAR_6->pport)
  return -VAR_0;

 for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_5); VAR_14++) {
  VAR_11 = VAR_10[VAR_5[VAR_14].type];
  if (!VAR_11)
   continue;

  VAR_13[VAR_14] = FUNC_2(VAR_11);
 }

 return 0;
}
