
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wl1271 {int fuse_oui_addr; int fuse_nic_addr; int * ptable; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct wl1271*,int ,int*) ;
 int FUNC_3 (struct wl1271*,int *) ;

__attribute__((used)) static int FUNC_4(struct wl1271 *VAR_5)
{
 u32 VAR_6, VAR_7;
 int VAR_8;

 VAR_8 = FUNC_3(VAR_5, &VAR_5->ptable[VAR_2]);
 if (VAR_8 < 0)
  goto out;

 VAR_8 = FUNC_2(VAR_5, VAR_3, &VAR_6);
 if (VAR_8 < 0)
  goto out;

 VAR_8 = FUNC_2(VAR_5, VAR_4, &VAR_7);
 if (VAR_8 < 0)
  goto out;


 VAR_5->fuse_oui_addr = ((VAR_7 & 0xffff) << 8) +
  ((VAR_6 & 0xff000000) >> 24);
 VAR_5->fuse_nic_addr = (VAR_6 & 0xffffff);

 if (!VAR_5->fuse_oui_addr && !VAR_5->fuse_nic_addr) {
  u8 VAR_9[VAR_0];

  FUNC_0(VAR_9);

  VAR_5->fuse_oui_addr = (VAR_9[0] << 16) + (VAR_9[1] << 8) + VAR_9[2];
  VAR_5->fuse_nic_addr = (VAR_9[3] << 16) + (VAR_9[4] << 8) + VAR_9[5];
  FUNC_1("MAC address from fuse not available, using random locally administered addresses.");
 }

 VAR_8 = FUNC_3(VAR_5, &VAR_5->ptable[VAR_1]);

out:
 return VAR_8;
}
