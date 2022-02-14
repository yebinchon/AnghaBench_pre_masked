
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct dentry {int dummy; } ;
struct bpf_map {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bpf_map*) ;
 int FUNC_1 (struct dentry*,int ,void*,int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct dentry *VAR_3, umode_t VAR_4, void *VAR_5)
{
 struct bpf_map *VAR_6 = VAR_5;

 return FUNC_1(VAR_3, VAR_4, VAR_5, &VAR_0,
        FUNC_0(VAR_6) ?
        &VAR_1 : &VAR_2);
}
