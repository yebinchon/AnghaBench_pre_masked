
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct airo_info {int (* bap_read ) (struct airo_info*,int *,int,int) ;} ;
typedef int __le16 ;


 int FUNC_0 (struct airo_info*,int *,int,int) ;

__attribute__((used)) static inline int FUNC_1(struct airo_info *VAR_0, __le16 *VAR_1, int VAR_2,
      int VAR_3)
{
 return VAR_0->bap_read(VAR_0, VAR_1, VAR_2, VAR_3);
}
