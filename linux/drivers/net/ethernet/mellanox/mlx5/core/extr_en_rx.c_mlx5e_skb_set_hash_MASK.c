
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct mlx5_cqe64 {int rss_hash_type; int rss_hash_result; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*,int ,int) ;

__attribute__((used)) static inline void FUNC_2(struct mlx5_cqe64 *VAR_5,
          struct sk_buff *VAR_6)
{
 u8 VAR_7 = VAR_5->rss_hash_type;
 int VAR_8 = (VAR_7 & VAR_1) ? VAR_3 :
   (VAR_7 & VAR_0) ? VAR_2 :
         VAR_4;
 FUNC_1(VAR_6, FUNC_0(VAR_5->rss_hash_result), VAR_8);
}
