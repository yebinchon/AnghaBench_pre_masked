
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ubifs_pad_node {int pad_len; } ;
struct ubifs_info {int leb_size; } ;
struct ubifs_ch {scalar_t__ node_type; int len; int magic; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,int,int,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (void*,int) ;
 scalar_t__ FUNC_5 (struct ubifs_info const*,void*,int,int,int,int) ;
 int FUNC_6 (struct ubifs_info const*,struct ubifs_pad_node*) ;
 int FUNC_7 (struct ubifs_info const*,char*,int,int) ;

int FUNC_8(const struct ubifs_info *VAR_8, void *VAR_9, int VAR_10, int VAR_11,
        int VAR_12, int VAR_13)
{
 struct ubifs_ch *VAR_14 = VAR_9;
 uint32_t VAR_15;

 VAR_15 = FUNC_3(VAR_14->magic);

 if (VAR_15 == 0xFFFFFFFF) {
  FUNC_2("hit empty space at LEB %d:%d", VAR_11, VAR_12);
  return VAR_3;
 }

 if (VAR_15 != VAR_6)
  return FUNC_4(VAR_9, VAR_10);

 if (VAR_10 < VAR_5)
  return VAR_4;

 FUNC_2("scanning %s at LEB %d:%d",
   FUNC_1(VAR_14->node_type), VAR_11, VAR_12);

 if (FUNC_5(VAR_8, VAR_9, VAR_11, VAR_12, VAR_13, 1))
  return VAR_1;

 if (VAR_14->node_type == VAR_7) {
  struct ubifs_pad_node *VAR_16 = VAR_9;
  int VAR_17 = FUNC_3(VAR_16->pad_len);
  int VAR_18 = FUNC_3(VAR_14->len);


  if (VAR_17 < 0 ||
      VAR_12 + VAR_18 + VAR_17 > VAR_8->leb_size) {
   if (!VAR_13) {
    FUNC_7(VAR_8, "bad pad node at LEB %d:%d",
       VAR_11, VAR_12);
    FUNC_6(VAR_8, VAR_16);
   }
   return VAR_0;
  }


  if ((VAR_18 + VAR_17) & 7) {
   if (!VAR_13)
    FUNC_7(VAR_8, "bad padding length %d - %d",
       VAR_12, VAR_12 + VAR_18 + VAR_17);
   return VAR_0;
  }

  FUNC_2("%d bytes padded at LEB %d:%d, offset now %d", VAR_17,
    VAR_11, VAR_12, FUNC_0(VAR_12 + VAR_18 + VAR_17, 8));

  return VAR_18 + VAR_17;
 }

 return VAR_2;
}
