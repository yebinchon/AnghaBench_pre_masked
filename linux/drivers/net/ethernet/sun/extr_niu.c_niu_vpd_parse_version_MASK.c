
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct niu_vpd {char* version; scalar_t__ fcode_major; scalar_t__ fcode_minor; } ;
struct niu {int flags; int dev; struct niu_vpd vpd; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct niu*,int ,int ,int ,char*,scalar_t__,scalar_t__) ;
 int VAR_4 ;
 int FUNC_1 (char const*,char*,scalar_t__*,scalar_t__*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char const*,char*,int) ;

__attribute__((used)) static void FUNC_4(struct niu *VAR_5)
{
 struct niu_vpd *VAR_6 = &VAR_5->vpd;
 int VAR_7 = FUNC_2(VAR_6->version) + 1;
 const char *VAR_8 = VAR_6->version;
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_7 - 5; VAR_9++) {
  if (!FUNC_3(VAR_8 + VAR_9, "FCode ", 6))
   break;
 }
 if (VAR_9 >= VAR_7 - 5)
  return;

 VAR_8 += VAR_9 + 5;
 FUNC_1(VAR_8, "%d.%d", &VAR_6->fcode_major, &VAR_6->fcode_minor);

 FUNC_0(VAR_5, VAR_4, VAR_0, VAR_5->dev,
       "VPD_SCAN: FCODE major(%d) minor(%d)\n",
       VAR_6->fcode_major, VAR_6->fcode_minor);
 if (VAR_6->fcode_major > VAR_2 ||
     (VAR_6->fcode_major == VAR_2 &&
      VAR_6->fcode_minor >= VAR_3))
  VAR_5->flags |= VAR_1;
}
