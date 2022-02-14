
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct extent_status {scalar_t__ es_pblk; int es_lblk; int es_len; } ;
typedef int ext4_lblk_t ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,int *,int,int,struct extent_status*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_2,
        struct extent_status *VAR_3)
{
 struct extent_status VAR_4;
 ext4_lblk_t VAR_5, VAR_6;

 if (VAR_3->es_pblk == 0) {
  FUNC_0(VAR_2, &VAR_1,
       VAR_3->es_lblk,
       VAR_3->es_lblk + VAR_3->es_len - 1,
       &VAR_4);





  if (VAR_4.es_len == 0)

   return 0;

  if (VAR_4.es_lblk > VAR_3->es_lblk) {

   VAR_3->es_len = FUNC_1(VAR_4.es_lblk - VAR_3->es_lblk,
         VAR_3->es_len);
   return 0;
  }

  VAR_3->es_len = VAR_4.es_lblk + VAR_4.es_len - VAR_3->es_lblk;
 }

 VAR_5 = VAR_3->es_lblk + VAR_3->es_len;
 FUNC_0(VAR_2, &VAR_1, VAR_5,
      VAR_0, &VAR_4);
 if (VAR_4.es_len == 0)
  VAR_6 = VAR_0;
 else
  VAR_6 = VAR_4.es_lblk;

 return VAR_6;
}
