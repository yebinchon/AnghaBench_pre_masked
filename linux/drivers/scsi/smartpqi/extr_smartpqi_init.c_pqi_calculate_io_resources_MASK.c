
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pqi_sg_descriptor {int dummy; } ;
struct pqi_ctrl_info {int scsi_ml_can_queue; int max_outstanding_requests; int max_io_slots; int error_buffer_length; int sg_tablesize; int max_sectors; scalar_t__ sg_chain_buffer_length; int max_sg_entries; int max_transfer_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void FUNC_1(struct pqi_ctrl_info *VAR_7)
{
 u32 VAR_8;
 u32 VAR_9;

 VAR_7->scsi_ml_can_queue =
  VAR_7->max_outstanding_requests - VAR_5;
 VAR_7->max_io_slots = VAR_7->max_outstanding_requests;

 VAR_7->error_buffer_length =
  VAR_7->max_io_slots * VAR_1;

 if (VAR_6)
  VAR_8 = FUNC_0(VAR_7->max_transfer_size,
   VAR_4);
 else
  VAR_8 = FUNC_0(VAR_7->max_transfer_size,
   VAR_3);

 VAR_9 = VAR_8 / VAR_0;


 VAR_9++;

 VAR_9 = FUNC_0(VAR_7->max_sg_entries, VAR_9);

 VAR_8 = (VAR_9 - 1) * VAR_0;

 VAR_7->sg_chain_buffer_length =
  (VAR_9 * sizeof(struct pqi_sg_descriptor)) +
  VAR_2;
 VAR_7->sg_tablesize = VAR_9;
 VAR_7->max_sectors = VAR_8 / 512;
}
