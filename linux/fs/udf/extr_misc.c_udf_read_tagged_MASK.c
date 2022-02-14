
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
typedef scalar_t__ u8 ;
struct tag {scalar_t__ tagIdent; scalar_t__ tagChecksum; scalar_t__ descVersion; scalar_t__ descCRCLength; scalar_t__ descCRC; int tagLocation; } ;
struct super_block {int s_blocksize; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int FUNC_0 (struct buffer_head*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,scalar_t__,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int,int,int) ;
 int FUNC_6 (struct super_block*,char*,int,int,...) ;
 scalar_t__ FUNC_7 (struct tag*) ;
 struct buffer_head* FUNC_8 (struct super_block*,int) ;

struct buffer_head *FUNC_9(struct super_block *VAR_0, uint32_t VAR_1,
        uint32_t VAR_2, uint16_t *VAR_3)
{
 struct tag *VAR_4;
 struct buffer_head *VAR_5 = ((void*)0);
 u8 VAR_6;


 if (VAR_1 == 0xFFFFFFFF)
  return ((void*)0);

 VAR_5 = FUNC_8(VAR_0, VAR_1);
 if (!VAR_5) {
  FUNC_6(VAR_0, "read failed, block=%u, location=%u\n",
   VAR_1, VAR_2);
  return ((void*)0);
 }

 VAR_4 = (struct tag *)(VAR_5->b_data);

 *VAR_3 = FUNC_3(VAR_4->tagIdent);

 if (VAR_2 != FUNC_4(VAR_4->tagLocation)) {
  FUNC_5("location mismatch block %u, tag %u != %u\n",
     VAR_1, FUNC_4(VAR_4->tagLocation), VAR_2);
  goto error_out;
 }


 VAR_6 = FUNC_7(VAR_4);
 if (VAR_6 != VAR_4->tagChecksum) {
  FUNC_6(VAR_0, "tag checksum failed, block %u: 0x%02x != 0x%02x\n",
   VAR_1, VAR_6, VAR_4->tagChecksum);
  goto error_out;
 }


 if (VAR_4->descVersion != FUNC_1(0x0002U) &&
     VAR_4->descVersion != FUNC_1(0x0003U)) {
  FUNC_6(VAR_0, "tag version 0x%04x != 0x0002 || 0x0003, block %u\n",
   FUNC_3(VAR_4->descVersion), VAR_1);
  goto error_out;
 }


 if (FUNC_3(VAR_4->descCRCLength) + sizeof(struct tag) > VAR_0->s_blocksize ||
     FUNC_3(VAR_4->descCRC) == FUNC_2(0,
     VAR_5->b_data + sizeof(struct tag),
     FUNC_3(VAR_4->descCRCLength)))
  return VAR_5;

 FUNC_5("Crc failure block %u: crc = %u, crclen = %u\n", VAR_1,
    FUNC_3(VAR_4->descCRC),
    FUNC_3(VAR_4->descCRCLength));
error_out:
 FUNC_0(VAR_5);
 return ((void*)0);
}
