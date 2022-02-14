; ModuleID = '/home/carl/AnghaBench/linux/drivers/video/fbdev/extr_stifb.c_CRX24_SET_OVLY_MASK.c'
source_filename = "/home/carl/AnghaBench/linux/drivers/video/fbdev/extr_stifb.c_CRX24_SET_OVLY_MASK.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

%struct.stifb_info = type { i32 }

@REG_11 = common dso_local global i32 0, align 4
@REG_14 = common dso_local global i32 0, align 4
@REG_3 = common dso_local global i32 0, align 4
@REG_13 = common dso_local global i32 0, align 4
@REG_22 = common dso_local global i32 0, align 4
@REG_23 = common dso_local global i32 0, align 4
@llvm.used = appending global [1 x i8*] [i8* bitcast (void (%struct.stifb_info*)* @CRX24_SET_OVLY_MASK to i8*)], section "llvm.metadata"

; Function Attrs: noinline nounwind optnone uwtable
define internal void @CRX24_SET_OVLY_MASK(%struct.stifb_info* %0) #0 {
  %2 = alloca %struct.stifb_info*, align 8
  store %struct.stifb_info* %0, %struct.stifb_info** %2, align 8
  %3 = load %struct.stifb_info*, %struct.stifb_info** %2, align 8
  %4 = call i32 @SETUP_HW(%struct.stifb_info* %3)
  %5 = load %struct.stifb_info*, %struct.stifb_info** %2, align 8
  %6 = load i32, i32* @REG_11, align 4
  %7 = call i32 @WRITE_WORD(i32 329261056, %struct.stifb_info* %5, i32 %6)
  %8 = load %struct.stifb_info*, %struct.stifb_info** %2, align 8
  %9 = load i32, i32* @REG_14, align 4
  %10 = call i32 @WRITE_WORD(i32 50332416, %struct.stifb_info* %8, i32 %9)
  %11 = load %struct.stifb_info*, %struct.stifb_info** %2, align 8
  %12 = load i32, i32* @REG_3, align 4
  %13 = call i32 @WRITE_WORD(i32 6128, %struct.stifb_info* %11, i32 %12)
  %14 = load %struct.stifb_info*, %struct.stifb_info** %2, align 8
  %15 = load i32, i32* @REG_13, align 4
  %16 = call i32 @WRITE_WORD(i32 -1, %struct.stifb_info* %14, i32 %15)
  %17 = load %struct.stifb_info*, %struct.stifb_info** %2, align 8
  %18 = load i32, i32* @REG_22, align 4
  %19 = call i32 @WRITE_WORD(i32 -1, %struct.stifb_info* %17, i32 %18)
  %20 = load %struct.stifb_info*, %struct.stifb_info** %2, align 8
  %21 = load i32, i32* @REG_23, align 4
  %22 = call i32 @WRITE_WORD(i32 0, %struct.stifb_info* %20, i32 %21)
  ret void
}

declare dso_local i32 @SETUP_HW(%struct.stifb_info*) #1

declare dso_local i32 @WRITE_WORD(i32, %struct.stifb_info*, i32) #1

attributes #0 = { noinline nounwind optnone uwtable "correctly-rounded-divide-sqrt-fp-math"="false" "disable-tail-calls"="false" "frame-pointer"="all" "less-precise-fpmad"="false" "min-legal-vector-width"="0" "no-infs-fp-math"="false" "no-jump-tables"="false" "no-nans-fp-math"="false" "no-signed-zeros-fp-math"="false" "no-trapping-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #1 = { "correctly-rounded-divide-sqrt-fp-math"="false" "disable-tail-calls"="false" "frame-pointer"="all" "less-precise-fpmad"="false" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "no-signed-zeros-fp-math"="false" "no-trapping-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "unsafe-fp-math"="false" "use-soft-float"="false" }

!llvm.module.flags = !{!0}
!llvm.ident = !{!1}

!0 = !{i32 1, !"wchar_size", i32 4}
!1 = !{!"clang version 10.0.1 (https://github.com/wsmoses/llvm-project-tok c8e5003577614e72d6d18a216e6a09771e1fcce4)"}
