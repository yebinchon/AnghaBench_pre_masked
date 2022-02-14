
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_hdr {int Flags; scalar_t__ Command; scalar_t__ Protocol; } ;
typedef scalar_t__ __le32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 scalar_t__ FUNC_1 (int) ;
 unsigned int FUNC_2 (struct smb_hdr*) ;

__attribute__((used)) static int
FUNC_3(struct smb_hdr *VAR_3)
{

 if (*(__le32 *) VAR_3->Protocol != FUNC_1(0x424d53ff)) {
  FUNC_0(VAR_2, "Bad protocol string signature header 0x%x\n",
    *(unsigned int *)VAR_3->Protocol);
  return 1;
 }


 if (VAR_3->Flags & VAR_0)
  return 0;


 if (VAR_3->Command == VAR_1)
  return 0;

 FUNC_0(VAR_2, "Server sent request, not response. mid=%u\n",
   FUNC_2(VAR_3));
 return 1;
}
