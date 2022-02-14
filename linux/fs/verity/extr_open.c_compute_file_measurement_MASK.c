
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct fsverity_hash_alg {int dummy; } ;
struct fsverity_descriptor {int sig_size; } ;
typedef int __le32 ;


 int FUNC_0 (struct fsverity_hash_alg const*,struct fsverity_descriptor*,int,int *) ;

__attribute__((used)) static int FUNC_1(const struct fsverity_hash_alg *VAR_0,
        struct fsverity_descriptor *VAR_1,
        u8 *VAR_2)
{
 __le32 VAR_3 = VAR_1->sig_size;
 int VAR_4;

 VAR_1->sig_size = 0;
 VAR_4 = FUNC_0(VAR_0, VAR_1, sizeof(*VAR_1), VAR_2);
 VAR_1->sig_size = VAR_3;

 return VAR_4;
}
