
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_vol {scalar_t__ seal; scalar_t__ snapshot_time; scalar_t__ handle_timeout; scalar_t__ no_lease; int UNC; } ;
struct cifs_tcon {scalar_t__ tidStatus; scalar_t__ seal; scalar_t__ snapshot_time; scalar_t__ handle_timeout; scalar_t__ no_lease; int treeName; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct cifs_tcon *VAR_2, struct smb_vol *VAR_3)
{
 if (VAR_2->tidStatus == VAR_0)
  return 0;
 if (FUNC_0(VAR_2->treeName, VAR_3->UNC, VAR_1))
  return 0;
 if (VAR_2->seal != VAR_3->seal)
  return 0;
 if (VAR_2->snapshot_time != VAR_3->snapshot_time)
  return 0;
 if (VAR_2->handle_timeout != VAR_3->handle_timeout)
  return 0;
 if (VAR_2->no_lease != VAR_3->no_lease)
  return 0;
 return 1;
}
