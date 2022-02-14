
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fft_sample_tlv {int length; } ;
struct TYPE_2__ {int rfs_chan_spec_scan; } ;
struct ath10k {TYPE_1__ spectral; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct fft_sample_tlv const*,int) ;

__attribute__((used)) static void FUNC_2(struct ath10k *VAR_0,
       const struct fft_sample_tlv *VAR_1)
{
 int VAR_2;

 if (!VAR_0->spectral.rfs_chan_spec_scan)
  return;

 VAR_2 = FUNC_0(VAR_1->length) +
   sizeof(*VAR_1);
 FUNC_1(VAR_0->spectral.rfs_chan_spec_scan, VAR_1, VAR_2);
}
