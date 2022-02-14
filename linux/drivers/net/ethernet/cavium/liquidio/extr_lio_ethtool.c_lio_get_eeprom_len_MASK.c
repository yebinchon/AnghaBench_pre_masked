
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct octeon_device {int boardinfo; } ;
struct octeon_board_info {char* name; char* serial_number; int minor; int major; } ;
struct net_device {int dummy; } ;
struct lio {struct octeon_device* oct_dev; } ;


 struct lio* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *,char*,char*,char*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0)
{
 u8 VAR_1[192];
 struct lio *VAR_2 = FUNC_0(VAR_0);
 struct octeon_device *VAR_3 = VAR_2->oct_dev;
 struct octeon_board_info *VAR_4;
 int VAR_5;

 VAR_4 = (struct octeon_board_info *)(&VAR_3->boardinfo);
 VAR_5 = FUNC_1(VAR_1, "boardname:%s serialnum:%s maj:%lld min:%lld\n",
        VAR_4->name, VAR_4->serial_number,
        VAR_4->major, VAR_4->minor);

 return VAR_5;
}
