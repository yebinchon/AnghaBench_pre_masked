
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct scsi_cmnd {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct scsi_cmnd*,int,int,int) ;
 int FUNC_1 (int,int ) ;
 int * VAR_3 ;
 int FUNC_2 (struct scsi_cmnd*,int *,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,int ,int) ;
 int VAR_4 ;
 scalar_t__ FUNC_6 () ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_7 (int ,int ,char*,int ,char*,int,int) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_11(struct scsi_cmnd *VAR_8, u64 VAR_9, u32 VAR_10,
      u32 VAR_11, bool VAR_12, bool VAR_13)
{
 int VAR_14;
 unsigned long VAR_15;
 unsigned long long VAR_16;
 u32 VAR_17 = VAR_5;
 u64 VAR_18, VAR_19;
 u8 *VAR_20;

 VAR_14 = FUNC_0(VAR_8, VAR_9, VAR_10, 1);
 if (VAR_14)
  return VAR_14;

 FUNC_9(&VAR_2, VAR_15);

 if (VAR_12 && FUNC_6()) {
  FUNC_8(VAR_9, VAR_10);
  goto out;
 }
 VAR_19 = VAR_9;
 VAR_18 = FUNC_1(VAR_19, VAR_6);

 VAR_20 = VAR_3 + (VAR_18 * VAR_17);
 if (VAR_13) {
  FUNC_5(VAR_20, 0, VAR_17);
  VAR_14 = 0;
 } else
  VAR_14 = FUNC_2(VAR_8, VAR_20, VAR_17);

 if (-1 == VAR_14) {
  FUNC_10(&VAR_2, VAR_15);
  return VAR_0 << 16;
 } else if (VAR_7 && !VAR_13 && (VAR_14 < VAR_17))
  FUNC_7(VAR_1, VAR_8->device,
       "%s: %s: lb size=%u, IO sent=%d bytes\n",
       VAR_4, "write same", VAR_17, VAR_14);


 for (VAR_16 = 1 ; VAR_16 < VAR_10 ; VAR_16++) {
  VAR_19 = VAR_9 + VAR_16;
  VAR_18 = FUNC_1(VAR_19, VAR_6);
  FUNC_4(VAR_3 + (VAR_18 * VAR_17), VAR_20, VAR_17);
 }
 if (FUNC_6())
  FUNC_3(VAR_9, VAR_10);
out:
 FUNC_10(&VAR_2, VAR_15);

 return 0;
}
