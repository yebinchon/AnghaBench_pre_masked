
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct seq_file {int dummy; } ;
struct btf_type {int dummy; } ;
struct btf {int dummy; } ;
struct TYPE_2__ {int (* seq_show ) (struct btf const*,struct btf_type const*,int ,void*,int ,struct seq_file*) ;} ;


 struct btf_type* FUNC_0 (struct btf const*,int *) ;
 TYPE_1__* FUNC_1 (struct btf_type const*) ;
 int FUNC_2 (struct btf const*,struct btf_type const*,int ,void*,int ,struct seq_file*) ;

__attribute__((used)) static void FUNC_3(const struct btf *VAR_0, const struct btf_type *VAR_1,
        u32 VAR_2, void *VAR_3, u8 VAR_4,
        struct seq_file *VAR_5)
{
 VAR_1 = FUNC_0(VAR_0, &VAR_2);

 FUNC_1(VAR_1)->seq_show(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
