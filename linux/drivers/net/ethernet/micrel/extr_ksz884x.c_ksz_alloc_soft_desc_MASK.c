
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ksz_desc_info {int ring; int alloc; } ;
struct ksz_desc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ksz_desc_info*,int) ;
 int FUNC_1 (int ,int,int ) ;

__attribute__((used)) static int FUNC_2(struct ksz_desc_info *VAR_1, int VAR_2)
{
 VAR_1->ring = FUNC_1(VAR_1->alloc, sizeof(struct ksz_desc),
      VAR_0);
 if (!VAR_1->ring)
  return 1;
 FUNC_0(VAR_1, VAR_2);
 return 0;
}
