
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;
typedef unsigned char sector_t ;


 unsigned char VAR_0 ;
 char* FUNC_0 (struct trace_seq*) ;
 int FUNC_1 (struct trace_seq*,char*,unsigned char,...) ;
 int FUNC_2 (struct trace_seq*,int ) ;

__attribute__((used)) static const char *
FUNC_3(struct trace_seq *VAR_1, unsigned char *VAR_2, int VAR_3)
{
 const char *VAR_4 = FUNC_0(VAR_1);
 sector_t VAR_5 = 0, VAR_6 = 0;

 VAR_5 |= (VAR_2[2] << 24);
 VAR_5 |= (VAR_2[3] << 16);
 VAR_5 |= (VAR_2[4] << 8);
 VAR_5 |= VAR_2[5];
 VAR_6 |= (VAR_2[7] << 8);
 VAR_6 |= VAR_2[8];

 FUNC_1(VAR_1, "lba=%llu txlen=%llu protect=%u",
    (unsigned long long)VAR_5, (unsigned long long)VAR_6,
    VAR_2[1] >> 5);

 if (VAR_2[0] == VAR_0)
  FUNC_1(VAR_1, " unmap=%u", VAR_2[1] >> 3 & 1);

 FUNC_2(VAR_1, 0);

 return VAR_4;
}
