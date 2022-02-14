
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cudbg_ver_hdr {int dummy; } ;
struct cudbg_qdesc_info {int dummy; } ;
struct cudbg_qdesc_entry {int dummy; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

void FUNC_0(const struct adapter *VAR_16,
       u32 *VAR_17, u32 *VAR_18)
{
 u32 VAR_19 = 0, VAR_20 = 0;


 VAR_19 += VAR_6 * 3;
 VAR_19 += VAR_3;

 VAR_20 += VAR_6 * VAR_13 * VAR_12;
 VAR_20 += VAR_6 * VAR_9 * VAR_10;
 VAR_20 += VAR_6 * VAR_11 * VAR_7;
 VAR_20 += VAR_3 * VAR_5 *
      VAR_4;


 VAR_19 += VAR_2;
 VAR_20 += VAR_2 * VAR_9 * VAR_10;


 VAR_19 += 1;
 VAR_20 += VAR_13 * VAR_12;


 VAR_19 += VAR_0 * VAR_8;
 VAR_19 += VAR_1 * VAR_14 * 2;

 VAR_20 += VAR_0 * VAR_8 * VAR_13 *
      VAR_12;
 VAR_20 += VAR_1 * VAR_14 * VAR_9 *
      VAR_10;
 VAR_20 += VAR_1 * VAR_14 * VAR_11 *
      VAR_7;


 VAR_19 += VAR_1 * VAR_14;
 VAR_20 += VAR_1 * VAR_14 * VAR_15 *
      VAR_10;

 VAR_20 += sizeof(struct cudbg_ver_hdr) +
      sizeof(struct cudbg_qdesc_info) +
      sizeof(struct cudbg_qdesc_entry) * VAR_19;

 if (VAR_17)
  *VAR_17 = VAR_19;

 if (VAR_18)
  *VAR_18 = VAR_20;
}
