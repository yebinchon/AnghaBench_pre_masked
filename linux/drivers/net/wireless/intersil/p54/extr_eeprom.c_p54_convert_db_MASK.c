
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pda_custom_wrapper {int data; int offset; int entry_size; int entries; int len; } ;
struct p54_cal_database {size_t entries; size_t entry_size; size_t offset; size_t len; int data; } ;


 int VAR_0 ;
 struct p54_cal_database* FUNC_0 (int,int ) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,size_t) ;

__attribute__((used)) static struct p54_cal_database *FUNC_3(struct pda_custom_wrapper *VAR_1,
            size_t VAR_2)
{
 struct p54_cal_database *VAR_3;
 size_t VAR_4, VAR_5, VAR_6, VAR_7;

 VAR_4 = FUNC_1(VAR_1->len);
 VAR_5 = FUNC_1(VAR_1->entries);
 VAR_6 = FUNC_1(VAR_1->entry_size);
 VAR_7 = FUNC_1(VAR_1->offset);
 if (((VAR_5 * VAR_6 + VAR_7) != VAR_4) ||
      (VAR_4 + sizeof(*VAR_1) != VAR_2))
  return ((void*)0);

 VAR_3 = FUNC_0(sizeof(*VAR_3) + VAR_4, VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->entries = VAR_5;
 VAR_3->entry_size = VAR_6;
 VAR_3->offset = VAR_7;
 VAR_3->len = VAR_4;

 FUNC_2(VAR_3->data, VAR_1->data, VAR_4);
 return VAR_3;
}
