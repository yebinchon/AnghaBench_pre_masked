
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct extent_status {scalar_t__ es_lblk; scalar_t__ es_len; } ;
typedef scalar_t__ ext4_lblk_t ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,int *,scalar_t__,scalar_t__,struct extent_status*) ;
 int FUNC_1 (struct inode*,scalar_t__,scalar_t__,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct inode *VAR_2, ext4_lblk_t VAR_3,
     ext4_lblk_t VAR_4)
{
 struct extent_status VAR_5;

 FUNC_0(VAR_2, &VAR_1, VAR_3,
      VAR_3 + VAR_4 - 1, &VAR_5);
 if (VAR_5.es_len) {

  if (VAR_5.es_lblk <= VAR_3)
   return;
  VAR_4 = FUNC_3(VAR_5.es_lblk - VAR_3, VAR_4);
 }
 FUNC_2(" -> %u:%u\n", VAR_3, VAR_4);
 FUNC_1(VAR_2, VAR_3, VAR_4, ~0,
         VAR_0);
}
