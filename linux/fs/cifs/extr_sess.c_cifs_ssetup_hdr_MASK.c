
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct cifs_ses {int capabilities; TYPE_1__* server; } ;
typedef int __u32 ;
struct TYPE_7__ {int Flags2; } ;
struct TYPE_8__ {int AndXCommand; TYPE_2__ hdr; void* VcNumber; void* MaxMpxCount; void* MaxBufferSize; } ;
struct TYPE_9__ {TYPE_3__ req; } ;
struct TYPE_6__ {int maxReq; scalar_t__ sign; } ;
typedef TYPE_4__ SESSION_SETUP_ANDX ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ,scalar_t__,int ) ;
 int VAR_16 ;

__attribute__((used)) static __u32 FUNC_2(struct cifs_ses *VAR_17, SESSION_SETUP_ANDX *VAR_18)
{
 __u32 VAR_19 = 0;






 VAR_18->req.AndXCommand = 0xFF;
 VAR_18->req.MaxBufferSize = FUNC_0(FUNC_1(VAR_16,
     VAR_9 + VAR_10 - 4,
     VAR_15));
 VAR_18->req.MaxMpxCount = FUNC_0(VAR_17->server->maxReq);
 VAR_18->req.VcNumber = FUNC_0(1);






 VAR_19 = VAR_1 | VAR_5 | VAR_4 |
   VAR_3 | VAR_2;

 if (VAR_17->server->sign)
  VAR_18->req.hdr.Flags2 |= VAR_13;

 if (VAR_17->capabilities & VAR_7) {
  VAR_18->req.hdr.Flags2 |= VAR_14;
  VAR_19 |= VAR_7;
 }
 if (VAR_17->capabilities & VAR_6) {
  VAR_18->req.hdr.Flags2 |= VAR_12;
  VAR_19 |= VAR_6;
 }
 if (VAR_17->capabilities & VAR_0) {
  VAR_18->req.hdr.Flags2 |= VAR_11;
  VAR_19 |= VAR_0;
 }
 if (VAR_17->capabilities & VAR_8)
  VAR_19 |= VAR_8;

 return VAR_19;
}
