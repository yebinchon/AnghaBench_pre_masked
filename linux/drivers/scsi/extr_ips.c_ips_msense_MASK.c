
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_11__ ;


typedef int uint32_t ;
typedef int uint16_t ;
typedef int mdata ;
struct TYPE_22__ {size_t target_id; TYPE_11__* scsi_cmd; } ;
typedef TYPE_7__ ips_scb_t ;
struct TYPE_23__ {TYPE_1__* enq; } ;
typedef TYPE_8__ ips_ha_t ;
struct TYPE_20__ {int PageCode; int PageLength; } ;
struct TYPE_18__ {int PageCode; int PageLength; int CylindersLow; int Heads; int MediumRotationRate; int RotationalOffset; int flags; int LandingZoneLow; int LandingZoneHigh; void* StepRate; int ReducedWriteCurrentLow; int ReducedWriteCurrentHigh; int WritePrecompLow; int WritePrecompHigh; void* CylindersHigh; } ;
struct TYPE_17__ {int PageCode; int PageLength; int flags; int CylinderSkew; int TrackSkew; void* Interleave; void* BytesPerSector; void* SectorsPerTrack; int AltTracksPerVolume; int AltTracksPerZone; int AltSectorsPerZone; int TracksPerZone; } ;
struct TYPE_21__ {TYPE_5__ pg8; TYPE_3__ pg4; TYPE_2__ pg3; } ;
struct TYPE_19__ {int BlockDescLength; int DataLength; } ;
struct TYPE_24__ {TYPE_6__ pdata; TYPE_4__ hdr; } ;
struct TYPE_16__ {int ucMiscFlag; int * ulDriveSize; } ;
struct TYPE_15__ {int* cmnd; } ;
typedef TYPE_9__ IPS_SCSI_MODE_PAGE_DATA ;
typedef int IPS_SCSI_MODE_PAGE8 ;
typedef int IPS_SCSI_MODE_PAGE4 ;
typedef int IPS_SCSI_MODE_PAGE3 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (TYPE_11__*,TYPE_9__*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_9__*,int ,int) ;

__attribute__((used)) static int
FUNC_5(ips_ha_t * VAR_6, ips_scb_t * VAR_7)
{
 uint16_t VAR_8;
 uint16_t VAR_9;
 uint32_t VAR_10;
 IPS_SCSI_MODE_PAGE_DATA VAR_11;

 FUNC_0("ips_msense", 1);

 if (FUNC_3(VAR_6->enq->ulDriveSize[VAR_7->target_id]) > 0x400000 &&
     (VAR_6->enq->ucMiscFlag & 0x8) == 0) {
  VAR_8 = VAR_3;
  VAR_9 = VAR_4;
 } else {
  VAR_8 = VAR_1;
  VAR_9 = VAR_2;
 }

 VAR_10 =
     (FUNC_3(VAR_6->enq->ulDriveSize[VAR_7->target_id]) -
      1) / (VAR_8 * VAR_9);

 FUNC_4(&VAR_11, 0, sizeof (IPS_SCSI_MODE_PAGE_DATA));

 VAR_11.hdr.BlockDescLength = 8;

 switch (VAR_7->scsi_cmd->cmnd[2] & 0x3f) {
 case 0x03:
  VAR_11.pdata.pg3.PageCode = 3;
  VAR_11.pdata.pg3.PageLength = sizeof (IPS_SCSI_MODE_PAGE3);
  VAR_11.hdr.DataLength =
      3 + VAR_11.hdr.BlockDescLength + VAR_11.pdata.pg3.PageLength;
  VAR_11.pdata.pg3.TracksPerZone = 0;
  VAR_11.pdata.pg3.AltSectorsPerZone = 0;
  VAR_11.pdata.pg3.AltTracksPerZone = 0;
  VAR_11.pdata.pg3.AltTracksPerVolume = 0;
  VAR_11.pdata.pg3.SectorsPerTrack = FUNC_1(VAR_9);
  VAR_11.pdata.pg3.BytesPerSector = FUNC_1(VAR_0);
  VAR_11.pdata.pg3.Interleave = FUNC_1(1);
  VAR_11.pdata.pg3.TrackSkew = 0;
  VAR_11.pdata.pg3.CylinderSkew = 0;
  VAR_11.pdata.pg3.flags = VAR_5;
  break;

 case 0x4:
  VAR_11.pdata.pg4.PageCode = 4;
  VAR_11.pdata.pg4.PageLength = sizeof (IPS_SCSI_MODE_PAGE4);
  VAR_11.hdr.DataLength =
      3 + VAR_11.hdr.BlockDescLength + VAR_11.pdata.pg4.PageLength;
  VAR_11.pdata.pg4.CylindersHigh =
      FUNC_1((VAR_10 >> 8) & 0xFFFF);
  VAR_11.pdata.pg4.CylindersLow = (VAR_10 & 0xFF);
  VAR_11.pdata.pg4.Heads = VAR_8;
  VAR_11.pdata.pg4.WritePrecompHigh = 0;
  VAR_11.pdata.pg4.WritePrecompLow = 0;
  VAR_11.pdata.pg4.ReducedWriteCurrentHigh = 0;
  VAR_11.pdata.pg4.ReducedWriteCurrentLow = 0;
  VAR_11.pdata.pg4.StepRate = FUNC_1(1);
  VAR_11.pdata.pg4.LandingZoneHigh = 0;
  VAR_11.pdata.pg4.LandingZoneLow = 0;
  VAR_11.pdata.pg4.flags = 0;
  VAR_11.pdata.pg4.RotationalOffset = 0;
  VAR_11.pdata.pg4.MediumRotationRate = 0;
  break;
 case 0x8:
  VAR_11.pdata.pg8.PageCode = 8;
  VAR_11.pdata.pg8.PageLength = sizeof (IPS_SCSI_MODE_PAGE8);
  VAR_11.hdr.DataLength =
      3 + VAR_11.hdr.BlockDescLength + VAR_11.pdata.pg8.PageLength;

  break;

 default:
  return (0);
 }

 FUNC_2(VAR_7->scsi_cmd, &VAR_11, sizeof (VAR_11));

 return (1);
}
