
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct brcmf_pub {int proto_block; int proto_buf; } ;
struct brcmf_if {int ifidx; struct brcmf_pub* drvr; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct brcmf_pub*,char*) ;
 scalar_t__ FUNC_2 (char*,void*,scalar_t__,int ,int) ;
 int FUNC_3 (int ,char*,int ,char*,scalar_t__) ;
 int FUNC_4 (int ,void*,int ,char*) ;
 int FUNC_5 (struct brcmf_if*,int ,int ,scalar_t__,int) ;
 int FUNC_6 (void*,int ,scalar_t__) ;
 int FUNC_7 (int ,scalar_t__,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_4 ;

s32
FUNC_10(struct brcmf_if *VAR_5, char *VAR_6, void *VAR_7,
    u32 VAR_8)
{
 struct brcmf_pub *VAR_9 = VAR_5->drvr;
 s32 VAR_10;
 u32 VAR_11;

 FUNC_8(&VAR_9->proto_block);

 VAR_11 = FUNC_2(VAR_6, VAR_7, VAR_8, VAR_9->proto_buf,
        sizeof(VAR_9->proto_buf));
 if (VAR_11) {
  VAR_10 = FUNC_5(VAR_5, VAR_0, VAR_9->proto_buf,
      VAR_11, 0);
  if (VAR_10 == 0)
   FUNC_6(VAR_7, VAR_9->proto_buf, VAR_8);
 } else {
  VAR_10 = -VAR_1;
  FUNC_1(VAR_9, "Creating iovar failed\n");
 }

 FUNC_3(VAR_2, "ifidx=%d, name=%s, len=%d\n", VAR_5->ifidx, VAR_6, VAR_8);
 FUNC_4(FUNC_0(), VAR_7,
      FUNC_7(VAR_4, VAR_8, VAR_3), "data\n");

 FUNC_9(&VAR_9->proto_block);
 return VAR_10;
}
