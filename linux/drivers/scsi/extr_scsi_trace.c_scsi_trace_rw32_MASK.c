
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef unsigned char u32 ;
struct trace_seq {int dummy; } ;
typedef int sector_t ;



 int const FUNC_0 (unsigned char*) ;



 char* FUNC_1 (struct trace_seq*) ;
 int FUNC_2 (struct trace_seq*,char*,...) ;
 int FUNC_3 (struct trace_seq*,int ) ;
 int FUNC_4 (struct trace_seq*,char*) ;

__attribute__((used)) static const char *
FUNC_5(struct trace_seq *VAR_0, unsigned char *VAR_1, int VAR_2)
{
 const char *VAR_3 = FUNC_1(VAR_0), *VAR_4;
 sector_t VAR_5 = 0, VAR_6 = 0;
 u32 VAR_7 = 0;

 switch (FUNC_0(VAR_1)) {
 case 131:
  VAR_4 = "READ";
  break;
 case 130:
  VAR_4 = "VERIFY";
  break;
 case 129:
  VAR_4 = "WRITE";
  break;
 case 128:
  VAR_4 = "WRITE_SAME";
  break;
 default:
  FUNC_4(VAR_0, "UNKNOWN");
  goto out;
 }

 VAR_5 |= ((u64)VAR_1[12] << 56);
 VAR_5 |= ((u64)VAR_1[13] << 48);
 VAR_5 |= ((u64)VAR_1[14] << 40);
 VAR_5 |= ((u64)VAR_1[15] << 32);
 VAR_5 |= (VAR_1[16] << 24);
 VAR_5 |= (VAR_1[17] << 16);
 VAR_5 |= (VAR_1[18] << 8);
 VAR_5 |= VAR_1[19];
 VAR_7 |= (VAR_1[20] << 24);
 VAR_7 |= (VAR_1[21] << 16);
 VAR_7 |= (VAR_1[22] << 8);
 VAR_7 |= VAR_1[23];
 VAR_6 |= (VAR_1[28] << 24);
 VAR_6 |= (VAR_1[29] << 16);
 VAR_6 |= (VAR_1[30] << 8);
 VAR_6 |= VAR_1[31];

 FUNC_2(VAR_0, "%s_32 lba=%llu txlen=%llu protect=%u ei_lbrt=%u",
    VAR_4, (unsigned long long)VAR_5,
    (unsigned long long)VAR_6, VAR_1[10] >> 5, VAR_7);

 if (FUNC_0(VAR_1) == 128)
  FUNC_2(VAR_0, " unmap=%u", VAR_1[10] >> 3 & 1);

out:
 FUNC_3(VAR_0, 0);

 return VAR_3;
}
