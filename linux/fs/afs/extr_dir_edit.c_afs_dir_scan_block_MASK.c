
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int valid; int name; } ;
union afs_xdr_dirent {TYPE_2__ u; } ;
struct TYPE_3__ {scalar_t__* bitmap; } ;
union afs_xdr_dir_block {union afs_xdr_dirent* dirents; TYPE_1__ hdr; } ;
typedef int u64 ;
struct qstr {int len; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(union afs_xdr_dir_block *VAR_4, struct qstr *VAR_5,
         unsigned int VAR_6)
{
 union afs_xdr_dirent *VAR_7;
 u64 VAR_8;
 int VAR_9, VAR_10, VAR_11;

 FUNC_0("");

 VAR_8 = (u64)VAR_4->hdr.bitmap[0] << 0 * 8;
 VAR_8 |= (u64)VAR_4->hdr.bitmap[1] << 1 * 8;
 VAR_8 |= (u64)VAR_4->hdr.bitmap[2] << 2 * 8;
 VAR_8 |= (u64)VAR_4->hdr.bitmap[3] << 3 * 8;
 VAR_8 |= (u64)VAR_4->hdr.bitmap[4] << 4 * 8;
 VAR_8 |= (u64)VAR_4->hdr.bitmap[5] << 5 * 8;
 VAR_8 |= (u64)VAR_4->hdr.bitmap[6] << 6 * 8;
 VAR_8 |= (u64)VAR_4->hdr.bitmap[7] << 7 * 8;

 for (VAR_9 = (VAR_6 == 0 ? VAR_2 : VAR_1);
      VAR_9 < VAR_3;
      VAR_9++) {
  if (!((VAR_8 >> VAR_9) & 1))
   continue;
  VAR_7 = &VAR_4->dirents[VAR_9];
  if (VAR_7->u.valid != 1)
   continue;


  VAR_10 = FUNC_3(VAR_7->u.name);
  if (VAR_10 == VAR_5->len &&
      FUNC_1(VAR_7->u.name, VAR_5->name, VAR_5->len) == 0)
   return VAR_9;

  VAR_11 = FUNC_2(12 + VAR_10 + 1 + 4, VAR_0);
  VAR_11 /= VAR_0;
  VAR_9 += VAR_11 - 1;
 }

 return -1;
}
