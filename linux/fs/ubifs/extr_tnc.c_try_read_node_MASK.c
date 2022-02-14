
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
struct ubifs_zbranch {int len; int lnum; int offs; int hash; } ;
struct ubifs_info {scalar_t__ remounting_rw; scalar_t__ mounting; int no_chk_data_crc; } ;
struct ubifs_ch {int node_type; int crc; int len; int magic; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* FUNC_0 (int ,void*,int) ;
 int FUNC_1 (char*,int,int,int ,int) ;
 int FUNC_2 (int) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (struct ubifs_info const*,void*,int ,int,int) ;
 int FUNC_5 (struct ubifs_info const*,char*,int,int,int,int) ;
 int FUNC_6 (struct ubifs_info const*,int,void*,int,int,int) ;
 int FUNC_7 (struct ubifs_info const*,void*,int ) ;

__attribute__((used)) static int FUNC_8(const struct ubifs_info *VAR_3, void *VAR_4, int VAR_5,
    struct ubifs_zbranch *VAR_6)
{
 int VAR_7 = VAR_6->len;
 int VAR_8 = VAR_6->lnum;
 int VAR_9 = VAR_6->offs;
 int VAR_10, VAR_11;
 struct ubifs_ch *VAR_12 = VAR_4;
 uint32_t VAR_13, VAR_14;

 FUNC_1("LEB %d:%d, %s, length %d", VAR_8, VAR_9, FUNC_2(VAR_5), VAR_7);

 VAR_10 = FUNC_6(VAR_3, VAR_8, VAR_4, VAR_9, VAR_7, 1);
 if (VAR_10) {
  FUNC_5(VAR_3, "cannot read node type %d from LEB %d:%d, error %d",
     VAR_5, VAR_8, VAR_9, VAR_10);
  return VAR_10;
 }

 if (FUNC_3(VAR_12->magic) != VAR_2)
  return 0;

 if (VAR_12->node_type != VAR_5)
  return 0;

 VAR_11 = FUNC_3(VAR_12->len);
 if (VAR_11 != VAR_7)
  return 0;

 if (VAR_5 != VAR_1 || !VAR_3->no_chk_data_crc || VAR_3->mounting ||
     VAR_3->remounting_rw) {
  VAR_13 = FUNC_0(VAR_0, VAR_4 + 8, VAR_11 - 8);
  VAR_14 = FUNC_3(VAR_12->crc);
  if (VAR_13 != VAR_14)
   return 0;
 }

 VAR_10 = FUNC_7(VAR_3, VAR_4, VAR_6->hash);
 if (VAR_10) {
  FUNC_4(VAR_3, VAR_4, VAR_6->hash, VAR_8, VAR_9);
  return 0;
 }

 return 1;
}
