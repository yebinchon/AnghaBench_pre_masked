
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct seq_file {int dummy; } ;
struct btf_type {int dummy; } ;
struct btf_kind_operations {int (* seq_show ) (struct btf const*,struct btf_type const*,scalar_t__,void*,int ,struct seq_file*) ;} ;
struct btf_array {scalar_t__ type; scalar_t__ nelems; } ;
struct btf {int dummy; } ;


 struct btf_array* FUNC_0 (struct btf_type const*) ;
 struct btf_type* FUNC_1 (struct btf const*,scalar_t__*,scalar_t__*) ;
 struct btf_kind_operations* FUNC_2 (struct btf_type const*) ;
 int FUNC_3 (struct seq_file*,char*) ;
 int FUNC_4 (struct btf const*,struct btf_type const*,scalar_t__,void*,int ,struct seq_file*) ;

__attribute__((used)) static void FUNC_5(const struct btf *VAR_0, const struct btf_type *VAR_1,
          u32 VAR_2, void *VAR_3, u8 VAR_4,
          struct seq_file *VAR_5)
{
 const struct btf_array *VAR_6 = FUNC_0(VAR_1);
 const struct btf_kind_operations *VAR_7;
 const struct btf_type *VAR_8;
 u32 VAR_9, VAR_10, VAR_11;

 VAR_11 = VAR_6->type;
 VAR_8 = FUNC_1(VAR_0, &VAR_11, &VAR_10);
 VAR_7 = FUNC_2(VAR_8);
 FUNC_3(VAR_5, "[");
 for (VAR_9 = 0; VAR_9 < VAR_6->nelems; VAR_9++) {
  if (VAR_9)
   FUNC_3(VAR_5, ",");

  VAR_7->seq_show(VAR_0, VAR_8, VAR_11, VAR_3,
       VAR_4, VAR_5);
  VAR_3 += VAR_10;
 }
 FUNC_3(VAR_5, "]");
}
