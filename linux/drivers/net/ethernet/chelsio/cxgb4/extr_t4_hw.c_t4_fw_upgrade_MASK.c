
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct fw_hdr {int flags; } ;
struct adapter {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct adapter*,unsigned int,int) ;
 int FUNC_2 (struct adapter*,struct fw_hdr const*) ;
 int FUNC_3 (struct adapter*,unsigned int,int) ;
 int FUNC_4 (struct adapter*) ;
 int FUNC_5 (struct adapter*,int *,int ) ;
 int FUNC_6 (struct adapter*,int const*,unsigned int) ;

int FUNC_7(struct adapter *VAR_3, unsigned int VAR_4,
    const u8 *VAR_5, unsigned int VAR_6, int VAR_7)
{
 const struct fw_hdr *VAR_8 = (const struct fw_hdr *)VAR_5;
 int VAR_9, VAR_10;

 if (!FUNC_2(VAR_3, VAR_8))
  return -VAR_1;




 VAR_3->flags &= ~VAR_0;

 VAR_10 = FUNC_1(VAR_3, VAR_4, VAR_7);
 if (VAR_10 < 0 && !VAR_7)
  goto out;

 VAR_10 = FUNC_6(VAR_3, VAR_5, VAR_6);
 if (VAR_10 < 0)
  goto out;
 (void)FUNC_5(VAR_3, ((void*)0), 0);
 VAR_9 = ((FUNC_0(VAR_8->flags) & VAR_2) == 0);
 VAR_10 = FUNC_3(VAR_3, VAR_4, VAR_9);






 (void)FUNC_4(VAR_3);
out:
 VAR_3->flags |= VAR_0;
 return VAR_10;
}
