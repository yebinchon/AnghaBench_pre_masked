
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint16_t ;
struct TYPE_3__ {int * smb2_com_failed; } ;
struct TYPE_4__ {TYPE_1__ smb2_stats; } ;
struct cifs_tcon {TYPE_2__ stats; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(struct cifs_tcon *VAR_0, uint16_t VAR_1)
{
 FUNC_0(&VAR_0->stats.smb2_stats.smb2_com_failed[VAR_1]);
}
