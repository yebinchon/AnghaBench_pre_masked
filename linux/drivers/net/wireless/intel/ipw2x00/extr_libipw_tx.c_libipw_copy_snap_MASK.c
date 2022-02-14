
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u16 ;
struct libipw_snap_hdr {int dsap; int ssap; int ctrl; void** oui; } ;
typedef scalar_t__ __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 void** VAR_2 ;
 void** VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (void**,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_2(u8 * VAR_5, __be16 VAR_6)
{
 struct libipw_snap_hdr *VAR_7;
 u8 *VAR_8;

 VAR_7 = (struct libipw_snap_hdr *)VAR_5;
 VAR_7->dsap = 0xaa;
 VAR_7->ssap = 0xaa;
 VAR_7->ctrl = 0x03;

 if (VAR_6 == FUNC_0(VAR_0) || VAR_6 == FUNC_0(VAR_1))
  VAR_8 = VAR_2;
 else
  VAR_8 = VAR_3;
 VAR_7->oui[0] = VAR_8[0];
 VAR_7->oui[1] = VAR_8[1];
 VAR_7->oui[2] = VAR_8[2];

 FUNC_1(VAR_5 + VAR_4, &VAR_6, sizeof(u16));

 return VAR_4 + sizeof(u16);
}
